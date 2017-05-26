#ifndef BIGMAP_H
#define BIGMAP_H

/*****  ArcGIS 的头文件  *****/
#include <ArcSDK.h>


/******       QT 的头文件  *******/
#include <QtGui/QMainWindow>

#include <qstring.h>
#include <QtGui/QMessageBox>
#include <QAction>
#include <QMenuBar>
#include <QStatusBar>
#include <QUuid>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <QTextCodec>///解决qt中文乱码时需要添加的头文件

/*****  opencv的头文件  *****/
#include <opencv2/opencv.hpp>
#include <opencv2/legacy/legacy.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include <opencv2/nonfree/nonfree.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <highgui/highgui.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/legacy/compat.hpp>
#include <cv.h>
#include <highgui.h>
#include <cxcore.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

/***  VC 的头文件 ***/
#include <vector>

/*****  SURF算法头文件 *****/
/*#include "SURF.h"*/

/*****使用CSrting时需要用到的头文件*****/
#include <atlstr.h>


/***自己编写的头文件***/
// #include "Pyramid_with_GDAL.h"
// #include "process.h"
// #include "process_with_surf.h"

#include <QWidget>
#include "ui_bigmap.h"

class Bigmap : public QWidget
{
	Q_OBJECT

public:
	Bigmap(QWidget *parent = 0);
	~Bigmap();

private:
	Ui::Bigmap ui;

	//用于图像配准的三个Map控件变量
	IMapControl3Ptr m_pMapControl1;
	IToolbarControlPtr m_pToolbarControl1;

	IMapControl3Ptr m_pMapControl2;
	IToolbarControlPtr m_pToolbarControl2;

	//	IMapControl3Ptr m_pMapControl3;
	//	IToolbarControlPtr m_pToolbarControl3;

	IMapControl3Ptr m_pMapControl4;
	IToolbarControlPtr m_pToolbarControl4;

	ITOCControlPtr m_pTOCControl1;
	ITOCControlPtr m_pTOCControl2;

public:
	//控件工具条设置函数
	void AddMapToolBarCtr(IToolbarControlPtr pToolbar);//map


};

#endif // BIGMAP_H
