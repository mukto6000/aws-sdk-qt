// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestAwsBasicCredentials : public QObject {
    Q_OBJECT

private slots:
    void construct_data();
    void construct();

    void expiration();
    void isExpired();
    void isRefreshable();
    void refresh();

    void setAccessKeyId_data();
    void setAccessKeyId();

    void setSecretKey_data();
    void setSecretKey();

    void setToken_data();
    void setToken();
};
