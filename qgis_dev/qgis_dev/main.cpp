#include "qgis_dev.h"
#include <QtGui/QApplication>

#include<qgsapplication.h>
#include<QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QgsApplication::setPrefixPath("F:/QGIS/qgis2.4.0",true);
	QgsApplication::initQgis();

	qgis_dev* myQgis = new qgis_dev();
	myQgis->show();

	return a.exec();
}
