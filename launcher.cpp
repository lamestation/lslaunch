#include "launcher.h"

#include <QDebug>

Launcher::Launcher(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    connect(ui.ide, SIGNAL(clicked()), this, SLOT(ide()));
    connect(ui.img, SIGNAL(clicked()), this, SLOT(img()));
    connect(ui.map, SIGNAL(clicked()), this, SLOT(map()));
    connect(ui.wav, SIGNAL(clicked()), this, SLOT(wav()));
    connect(ui.sng, SIGNAL(clicked()), this, SLOT(sng()));
}

Launcher::~Launcher()
{

}

void Launcher::launch(QString filename)
{
    if (!QProcess::startDetached(filename))
        qDebug() << qPrintable(tr("%1 does not exist!").arg(filename));
}

void Launcher::ide() { launch("propelleride"); }
void Launcher::img() { launch("lspaint"); }
void Launcher::map() { launch("tiled"); }
void Launcher::wav() { launch("wav2dat"); }
void Launcher::sng() { launch("sng2dat"); }
