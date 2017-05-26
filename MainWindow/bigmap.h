#ifndef BIGMAP_H
#define BIGMAP_H

/*****  ArcGIS ��ͷ�ļ�  *****/
#include <ArcSDK.h>


/******       QT ��ͷ�ļ�  *******/
#include <QtGui/QMainWindow>

#include <qstring.h>
#include <QtGui/QMessageBox>
#include <QAction>
#include <QMenuBar>
#include <QStatusBar>
#include <QUuid>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <QTextCodec>///���qt��������ʱ��Ҫ��ӵ�ͷ�ļ�

/*****  opencv��ͷ�ļ�  *****/
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

/***  VC ��ͷ�ļ� ***/
#include <vector>

/*****  SURF�㷨ͷ�ļ� *****/
/*#include "SURF.h"*/

/*****ʹ��CSrtingʱ��Ҫ�õ���ͷ�ļ�*****/
#include <atlstr.h>


/***�Լ���д��ͷ�ļ�***/
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

	//����ͼ����׼������Map�ؼ�����
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
	//�ؼ����������ú���
	void AddMapToolBarCtr(IToolbarControlPtr pToolbar);//map


};

#endif // BIGMAP_H
