#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

#include <QtGui/QMainWindow>
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	enum WIDGET_TYPE{
		WIDGET_MAINWINDOW,
		WIDGET_BIGMAPWINDOW,
		WIDGET_FENKUAIWINDOW
	};

public slots:
	void on_actionReturn_triggered();
	void on_actionBigmap_triggered();
	void on_actionFenkuai_triggered();
	void OpenFile1();
	void OpenFile2();
	void OnClearMapLayer();
public:
	MainWindow(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainWindow();
// 	�ؼ����������ú���
// 		void AddMapToolBarCtr(IToolbarControlPtr pToolbar);//map
private:
	Ui::MainWindowClass ui;
	QWidget *m_widget;
	WIDGET_TYPE m_widgetType;
	void clear(const WIDGET_TYPE &_ignoreType=WIDGET_MAINWINDOW);
	void init_UI();
private:
	void createWidgetBigmap();
	void creatrWidgetFenkuai();
private:
	QAction *BigmapAction;
	QAction *FenkuaiAction;
	QAction *openAction1,*openAction2;
	QAction *DeletMapLayersAction;
	QAction *ReturnAction;

};

#endif // MAINWINDOW_H
