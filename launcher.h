#pragma once

#include "ui_launcher.h"

#include <QString>
#include <QProcess>

class Launcher : public QWidget
{
    Q_OBJECT

private:
    Ui::Launcher ui;

public:
    explicit Launcher(QWidget *parent = 0);
    ~Launcher();
    void launch(QString filename);

private slots:
    void ide();
    void img();
    void map();
    void wav();
    void sng();
};
