// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGELENSCONFIGURATIONRESPONSE_H
#define QTAWS_PUTSTORAGELENSCONFIGURATIONRESPONSE_H

#include "s3controlresponse.h"
#include "putstoragelensconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class PutStorageLensConfigurationResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutStorageLensConfigurationResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutStorageLensConfigurationResponse(const PutStorageLensConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutStorageLensConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStorageLensConfigurationResponse)
    Q_DISABLE_COPY(PutStorageLensConfigurationResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
