#ifndef QGIS_DEVLAYERTREEVIEWMENUPROVIDER_H
#define QGIS_DEVLAYERTREEVIEWMENUPROVIDER_H

#include <QObject>

#include <qgslayertreeview.h>
#include <qgsmaplayer.h>

class QAction;

struct LegendLayerAction
{
	LegendLayerAction( QAction* a, QString m, QString i, bool all )
		: action( a ), menu( m ), id( i ), allLayers( all ) {}
	QAction* action;
	QString menu;
	QString id;
	bool allLayers;
	QList<QgsMapLayer*> layers;
};

class QgsMapCanvas;

class qgis_devLayerTreeViewMenuProvider : public QObject, public QgsLayerTreeViewMenuProvider
{
	Q_OBJECT

public:
	qgis_devLayerTreeViewMenuProvider( QgsLayerTreeView *view, QgsMapCanvas* canvas );
	~qgis_devLayerTreeViewMenuProvider();

	//! ��д�����������ȡ�Ҽ��˵�
	QMenu* createContextMenu() override;

	void addLegendLayerAction( QAction* action, QString menu, QString id,
		QgsMapLayer::LayerType type, bool allLayers );
	bool removeLegendLayerAction( QAction* action );
	void addLegendLayerActionForLayer( QAction* action, QgsMapLayer* layer );
	void removeLegendLayerActionsForLayer( QgsMapLayer* layer );
	QList< LegendLayerAction > legendLayerActions( QgsMapLayer::LayerType type ) const;

protected:

	void addCustomLayerActions( QMenu* menu, QgsMapLayer* layer );

	QgsLayerTreeView* mView;
	QgsMapCanvas* mCanvas;

	QMap<QgsMapLayer::LayerType, QList< LegendLayerAction>> mLegendLayerActionMap;

};

#endif // QGIS_DEVLAYERTREEVIEWMENUPROVIDER_H