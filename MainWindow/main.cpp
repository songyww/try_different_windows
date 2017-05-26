#include "mainwindow.h"
#include "bigmap.h"
#include "fenkuai.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	::CoInitialize(NULL);//��ʼ��

	//����ɺͳ�ʼ�����

#pragma region �����

	IArcGISVersionPtr ipVer(__uuidof(VersionManager));

	VARIANT_BOOL succeeded;

	if (FAILED(ipVer->LoadVersion(esriArcGISEngine , L"10.1",&succeeded)))

		return 0;

#pragma endregion

	//

#pragma region ��ʼ�����

	IAoInitializePtr ipInit(CLSID_AoInitialize);

	esriLicenseStatus status;

	ipInit->Initialize(esriLicenseProductCodeEngine, &status);

	if (status != esriLicenseCheckedOut)

	{

		AoExit(0);

		return 0;

	}



#pragma endregion

	esriLicenseExtensionCode ExtensionCode;
	esriLicenseStatus status1;
	ipInit->CheckOutExtension(esriLicenseExtensionCode3DAnalyst,&status1);


	///���QT����������
	QTextCodec *codec = QTextCodec::codecForName("GB2312");
	QTextCodec::setCodecForLocale(codec);

	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);


	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
