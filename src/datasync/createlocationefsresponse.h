// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONEFSRESPONSE_H
#define QTAWS_CREATELOCATIONEFSRESPONSE_H

#include "datasyncresponse.h"
#include "createlocationefsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationEfsResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationEfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationEfsResponse(const CreateLocationEfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationEfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationEfsResponse)
    Q_DISABLE_COPY(CreateLocationEfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
