/********************************************************************
    Copyright (c) 2013-2014 - QSanguosha-Hegemony Team

    This file is part of QSanguosha-Hegemony.

    This game is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3.0 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    See the LICENSE file for more details.

    QSanguosha-Hegemony Team
    *********************************************************************/

#ifndef UDPDETECTORDIALOG_H
#define UDPDETECTORDIALOG_H

#include "FlatDialog.h"

class UdpDetector;
class QListWidget;
class QListWidgetItem;

class UdpDetectorDialog : public FlatDialog {
    Q_OBJECT

public:
    UdpDetectorDialog(QDialog *parent);

private:
    QListWidget *list;
    UdpDetector *detector;
    QPushButton *detect_button;
    QPushButton *cancel_button;

private slots:
    void startDetection();
    void stopDetection();
    void chooseAddress(QListWidgetItem *item);
    void addServerAddress(const QString &server_name, const QString &address);

signals:
    void address_chosen(const QString &address);
};

#endif // UDPDETECTORDIALOG_H