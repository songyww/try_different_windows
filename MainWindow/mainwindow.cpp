#include "mainwindow.h"
#include "bigmap.h"
#include "fenkuai.h"

#include <QTranslator>
#include <qt/qmessagebox.h>

MainWindow::MainWindow(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	init_UI();
	openAction1 = new QAction( QIcon(":/images/doc-open"), tr("&打开参考图像"), this );
	openAction1->setStatusTip(tr("Open the First Image"));//当触发这个机制时，会在窗口最下方状态栏显示状态
	openAction2 = new QAction( QIcon(":/images/doc-open"), tr("&打开待配准图像"), this );
	openAction2->setStatusTip(tr("Open the Second Image"));//同上
	connect(openAction1, SIGNAL(triggered()), this, SLOT(OpenFile1()));
	connect(openAction2, SIGNAL(triggered()), this, SLOT(OpenFile2()));
	ui.menu->addAction(openAction1);
	ui.menu->addAction(openAction2);
	DeletMapLayersAction = new QAction( QIcon(":/image/doc-close"),tr("&清除所有数据"),this);
	DeletMapLayersAction->setStatusTip(tr("Clear all Datas"));
	connect(DeletMapLayersAction,SIGNAL(triggered()), this, SLOT(OnClearMapLayer()));
	ui.menu->addAction(DeletMapLayersAction);
	BigmapAction = new QAction(QIcon("tree"),tr("&超大图像配准"),this);
	connect(BigmapAction,SIGNAL(triggered()),this,SLOT(on_actionBigmap_triggered()));
	ui.menu_2->addAction(BigmapAction);
	FenkuaiAction = new QAction(QIcon("tree"),tr("&图像快速定位"),this);
	connect(FenkuaiAction,SIGNAL(triggered()),this,SLOT(on_actionFenkuai_triggered()));
	ui.menu_3->addAction(FenkuaiAction);
	ReturnAction = new QAction(QIcon("tree"),tr("&返回主界面"),this);
	connect(ReturnAction,SIGNAL(triggered()),this,SLOT(on_actionReturn_triggered()));
	ui.menu->addAction(ReturnAction);



}

MainWindow::~MainWindow()
{

}

void MainWindow::init_UI()
{
	m_widgetType = WIDGET_MAINWINDOW;
	m_widget = NULL;
	this->move(100,100);
}

void MainWindow::clear(const WIDGET_TYPE &_ignoreType/* =WIDGET_TYPE */)
{
	if(!m_widget)return;
	WIDGET_TYPE ignoreType = _ignoreType;//跳过指定类型
	if (m_widgetType == WIDGET_BIGMAPWINDOW && ignoreType!= WIDGET_BIGMAPWINDOW)
	{
		delete (Bigmap*)m_widget;
		m_widget = NULL;
	}
	if (m_widgetType == WIDGET_FENKUAIWINDOW && ignoreType!= WIDGET_FENKUAIWINDOW)
	{
		delete (FenKuai*)m_widget;
		m_widget = NULL;
	}
}

void MainWindow::createWidgetBigmap()
{
	if (m_widgetType != WIDGET_BIGMAPWINDOW)
	{
		clear(WIDGET_BIGMAPWINDOW);
		m_widget = new Bigmap(this);
		m_widgetType = WIDGET_BIGMAPWINDOW;
		ui.centralWidget->setHidden(true);
		m_widget->setWindowFlags(Qt::Widget);
		m_widget->resize(ui.centralWidget->size());
		m_widget->setGeometry(ui.centralWidget->geometry());
		m_widget->show();
		disconnect(openAction1,0);
		connect(openAction1,SIGNAL(triggered()),m_widget,SLOT(OpenFile1()));
		disconnect(openAction2,0);
		connect(openAction2,SIGNAL(triggered()),m_widget,SLOT(OpenFile2()));
		disconnect(DeletMapLayersAction,0);
		connect(DeletMapLayersAction,SIGNAL(triggered()),m_widget,SLOT(OnClearMapLayer()));
	}
}

void MainWindow::creatrWidgetFenkuai()
{
	if (m_widgetType != WIDGET_FENKUAIWINDOW)
	{
		clear(WIDGET_FENKUAIWINDOW);
		m_widget = new FenKuai(this);
		m_widgetType = WIDGET_FENKUAIWINDOW;
		ui.centralWidget->setHidden(true);
		m_widget->setWindowFlags(Qt::Widget);
		m_widget->resize(ui.centralWidget->size());
		m_widget->setGeometry(ui.centralWidget->geometry());
		m_widget->show();
		disconnect(openAction1,0);
		connect(openAction1,SIGNAL(triggered()),m_widget,SLOT(OpenFile1()));
		disconnect(openAction2,0);
		connect(openAction2,SIGNAL(triggered()),m_widget,SLOT(OpenFile2()));
		disconnect(DeletMapLayersAction,0);
		connect(DeletMapLayersAction,SIGNAL(triggered()),m_widget,SLOT(OnClearMapLayer()));
	}
}

void MainWindow::on_actionBigmap_triggered()
{
	createWidgetBigmap();
}

void MainWindow::on_actionFenkuai_triggered()
{
	creatrWidgetFenkuai();
}
void MainWindow::on_actionReturn_triggered()
{
	if (m_widgetType!= WIDGET_MAINWINDOW)
	{
		clear();
		m_widgetType = WIDGET_MAINWINDOW;
		ui.centralWidget->setHidden(false);
		disconnect(openAction1,0);
		disconnect(openAction2,0);
		disconnect(DeletMapLayersAction,0);
	}
}

void MainWindow::OpenFile1()
{
	//FileOpenFlag1 = 1;
	//PyramidBase pyramid1; 
	//refImg.clear();
	//QString file_full1,file_name1,m_strFileName1;
	//QString file_path1 = NULL;
	//String reImg_full,reImg_path;	//reimg_full:图像的完整路径；reimg_path：图像所在文件夹路径

	//QFileInfo fi;		  
	//file_full1 = QFileDialog::getOpenFileName(this,"open the second picture",file_path1);  
	//fi = QFileInfo(file_full1);  
	//m_strFileName1=fi.absoluteFilePath();

	//reImg_full = m_strFileName1.toStdString();////QString 转换为string///图像完整路径
	//int po = reImg_full.find_last_of('/');
	//reImg_path = reImg_full.substr( 0,po+1); ///文件夹路径

	////将参考图像所在文件夹路径以及图像路径存放入路径容器
	//refImg.push_back(reImg_path);//refImg[0]:参考图像所在文件夹路径
	//refImg.push_back(reImg_full);//refImg[1]:参考图像完整路径

	////将参考图像保存入金字塔构建的路径中
	//pyramid1.InFilePath = reImg_full.c_str();	//参考图像完整路径
	//pyramid1.FilePath = reImg_path.c_str();		//参考图像所在文件夹路径
	//pyramid1.CheckPyramid();
	//refLayer.clear();
	//char rsize[1024];
	//sprintf(rsize,"%d*%d",pyramid1.iWidth,pyramid1.iHeight);
	//QString rsize1 = QString::fromUtf8(rsize);
	//ui.refImageSize->setText(rsize1);


	//char dir[1024];
	//sprintf(dir,"%s%s",pyramid1.FilePath,"refPyramidLayers");//filepath:金字塔层所在文件夹
	////判断该文件夹是否存在，若存在，则不用重新建立；若不存在，则创建该文件夹
	//if(_access(dir, 0) != -1)  
	//{  
	//	cout << "文件夹已存在" <<endl;  
	//	//system("pause");
	//}  
	//else  
	//{  
	//	cout << "文件夹不存在，创建文件夹" << endl;  
	//	_mkdir(dir); 
	//	//system("pause");
	//} 
	//pyramid1.LayerPath = dir;
	//refLayer.push_back(dir);		//refLayer[0]:参考图像金字塔文件夹路径

	//for (int i = 0;i < pyramid1.iOverViewCount; i++)
	//{

	//	char filepath[1024] = "";			//filepath[1024]:用以保存函数返回的金字塔每一层图像路径
	//	pyramid1.SaveSingleBand(i,filepath);//,pyramid1.InFile);
	//	refLayer.push_back(filepath);	//refLayer[i+1]:参考图像金字塔第i层图像路径；其中refLayer[1]保存第0层(原图像素的1/4 * 1/4)
	//}

	///*Map控件显示参考图像*/
	//BSTR bstr_str;

	//bstr_str = SysAllocString(m_strFileName1.utf16());

	//HRESULT hr;

	//IRasterLayerPtr pRasterLy(CLSID_RasterLayer);

	//hr=pRasterLy->CreateFromFilePath(bstr_str);

	//if(FAILED(hr))

	//	return;

	//ILayerPtr pLyr(pRasterLy);

	//m_pMapControl1->AddLayer(pLyr,0);

	//IActiveViewPtr pActiveView(m_pMapControl1);

	//m_pMapControl1->Refresh(esriViewAll);  

	//FileOpenFlag1 = 1;
	////对图像大小进行判断
	//if (pyramid1.iWidth < 1000 || pyramid1.iHeight < 1000)
	//	FileOpenFlag1 = 2;
	//else if(pyramid1.iWidth < 4300 || (pyramid1.iHeight < 4300))
	//	FileOpenFlag1 = 3;
	//else
	//	FileOpenFlag1 = 4;


}

void MainWindow::OpenFile2()
{

	//PyramidBase pyramid2; 
	//senImg.clear();
	//senLayer.clear();
	//QString file_full2,file_name2,m_strFileName2;
	//QString file_path2 = NULL;
	//String sen_full,sen_path;	//sen_full:待配准图像完整路径；sen_path：待配准图像所在文件夹路径

	//QFileInfo fi;		  
	//file_full2 = QFileDialog::getOpenFileName(this,"open the second picture",file_path2);  
	//fi = QFileInfo(file_full2);  
	//m_strFileName2=fi.absoluteFilePath();

	//sen_full = m_strFileName2.toStdString();
	//int po = sen_full.find_last_of('/');
	//sen_path = sen_full.substr( 0, po + 1 );

	///*将待配准图像路径存如全局路径容器中*/
	//senImg.push_back(sen_path);		//senImg[0]:待配准图像所在文件夹路径
	//senImg.push_back(sen_full);		//senImg[1]：待配准图像完整路径

	///*将待配准图像路径传递给金字塔类*/
	//pyramid2.InFilePath = sen_full.c_str();	//待配准图像完整路径
	//pyramid2.FilePath = sen_path.c_str();	//待配准图像文件夹路径
	//pyramid2.CheckPyramid();
	//char rsize[1024];
	//sprintf(rsize,"%d*%d",pyramid2.iWidth,pyramid2.iHeight);
	//QString rsize2 = QString::fromUtf8(rsize);
	//ui.senImageSize->setText(rsize2);


	//char dir[1024];
	//sprintf(dir,"%s%s",pyramid2.FilePath,"senPyramidLayers");//filepath:金字塔层所在文件夹
	////判断该文件夹是否存在，若存在，则不用重新建立；若不存在，则创建该文件夹
	//if(_access(dir, 0) != -1)  
	//{  
	//	cout << "文件夹已存在" <<endl;  
	//	//system("pause");
	//}  
	//else  
	//{  
	//	cout << "文件夹不存在，创建文件夹" << endl;  
	//	_mkdir(dir); 
	//	//system("pause");
	//} 
	//pyramid2.LayerPath = dir;
	//senLayer.push_back(dir);		//refLayer[0]:参考图像金字塔文件夹路径

	//for (int i = 0;i < pyramid2.iOverViewCount; i++)
	//{

	//	char filepath[1024] = "";			//filepath[1024]:用以保存函数返回的金字塔每一层图像路径
	//	pyramid2.SaveSingleBand(i,filepath);//,pyramid1.InFile);
	//	senLayer.push_back(filepath);	//refLayer[i+1]:参考图像金字塔第i层图像路径；其中refLayer[1]保存第0层(原图像素的1/4 * 1/4)
	//}

	//m_strFileName2=fi.absoluteFilePath();

	//BSTR bstr_str;

	//bstr_str = SysAllocString(m_strFileName2.utf16());

	//HRESULT hr;

	//IRasterLayerPtr pRasterLy(CLSID_RasterLayer);

	//hr=pRasterLy->CreateFromFilePath(bstr_str);

	//if(FAILED(hr))

	//	return;

	//ILayerPtr pLyr(pRasterLy);

	//m_pMapControl2->AddLayer(pLyr,0);

	//IActiveViewPtr pActiveView(m_pMapControl2);

	//m_pMapControl2->Refresh(esriViewAll);  

	//FileOpenFlag2 = 1;

	////若图像打开了，则进行判断大小
	//if (pyramid2.iWidth < 1000 || pyramid2.iHeight < 1000)
	//	FileOpenFlag2 = 2;
	//else if(pyramid2.iWidth < 4300 || (pyramid2.iHeight < 4300))
	//	FileOpenFlag2 = 3;
	//else
	//	FileOpenFlag2 = 4;

	//if (FileOpenFlag1>0 && FileOpenFlag2>0)
	//{
	//	if(FileOpenFlag1 == 2 && FileOpenFlag2 == 2)
	//	{
	//		//则提示使用小图匹配算法
	//	}
	//	else if (FileOpenFlag1 == 3 && FileOpenFlag2 == 2)
	//	{
	//		//则提示使用快速定位算法
	//	}
	//	else if (FileOpenFlag1 == 4 && FileOpenFlag2 == 4)
	//	{
	//		//则提示使用超大图像配准算法
	//	}


	//}

}

void MainWindow::OnClearMapLayer()
{

}