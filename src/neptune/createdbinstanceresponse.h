// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCERESPONSE_H
#define QTAWS_CREATEDBINSTANCERESPONSE_H

#include "neptuneresponse.h"
#include "createdbinstancerequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBInstanceResponsePrivate;

class QTAWSNEPTUNE_EXPORT CreateDBInstanceResponse : public NeptuneResponse {
    Q_OBJECT

public:
    CreateDBInstanceResponse(const CreateDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBInstanceResponse)
    Q_DISABLE_COPY(CreateDBInstanceResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
