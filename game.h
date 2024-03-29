#ifndef GAME_H
#define GAME_H

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <QString>
#include <QObject>
#include <vector>
#include <fstream>
#include <iostream>
#include "tile.h"
#include "mapmanager.h"

class Game : public QObject
{
    Q_OBJECT

    int m_score1;
    int m_score2;

    std::vector <Tile> m_map;
    MapManager * manager = new MapManager;

public:
      explicit Game(QObject *parent = nullptr);
      Q_INVOKABLE int getId(int index);
      Q_INVOKABLE int getScore1();
      Q_INVOKABLE int getScore2();
      Q_INVOKABLE int getObject(int index);
      Q_INVOKABLE void setId(int index, int id);
      Q_INVOKABLE void newMap();
      Q_INVOKABLE void loadMap();
      Q_INVOKABLE void saveMap();

signals:

public slots:
};


#endif // GAME_H
