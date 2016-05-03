#ifndef QGIS_DEV_H
#define QGIS_DEV_H

#include <QtGui/QMainWindow>
#include "ui_qgis_dev.h"

#include <QList>
#include <QDockWidget>
#include <QProgressBar>
#include <QLabel>
#include <QDockWidget>

// QGis include
#include <qgsmapcanvas.h>
#include <qgsmaplayer.h>
#include <qgslayertreeview.h>
#include <qgslayertreemapcanvasbridge.h>
#include <qgsscalecombobox.h>

class qgis_dev : public QMainWindow
{
    Q_OBJECT

public:
    qgis_dev( QWidget *parent = 0, Qt::WFlags flags = 0 );
    ~qgis_dev();

    void addDockWidget( Qt::DockWidgetArea area, QDockWidget* dockwidget );

    //! ���ֵ�һʵ��
    static inline qgis_dev *instance() { return sm_instance; };
public slots:
    //! ���ʸ��ͼ��
    void addVectorLayers();
    //! ���դ��ͼ��
    void addRasterLayers();

    void autoSelectAddedLayer( QList<QgsMapLayer*> layers );
private:
    Ui::qgis_devClass ui;
    static qgis_dev* sm_instance;

    QgsMapCanvas* m_mapCanvas; // ��ͼ����

    //! ͼ�����
    QgsLayerTreeView* m_layerTreeView;
    QgsLayerTreeMapCanvasBridge *m_layerTreeCanvasBridge;


    QDockWidget *m_layerTreeDock;
    QDockWidget *m_layerOrderDock;
    /*QDockWidget *m_OverviewDock;
    QDockWidget *m_pGpsDock;
    QDockWidget *m_logDock;*/

    QLabel* m_scaleLabel; // ��״̬������ʾ��scale 1:��
    QgsScaleComboBox* m_scaleEdit; //! ��״̬������ʾ������ֵ
    QProgressBar* m_progressBar;
    QLabel* m_coordsLabel; //! ��״̬����ʾ"Coordinate / Extent"
    QLineEdit* m_coordsEdit; //! ��״̬����ʾ��������

    QList<QgsMapCanvasLayer> mapCanvasLayerSet; // ��ͼ�������õ�ͼ�㼯��



    void initLayerTreeView();
    void createStatusBar();

};

#endif // QGIS_DEV_H