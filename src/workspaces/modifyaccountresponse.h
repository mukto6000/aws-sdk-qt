// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYACCOUNTRESPONSE_H
#define QTAWS_MODIFYACCOUNTRESPONSE_H

#include "workspacesresponse.h"
#include "modifyaccountrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyAccountResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifyAccountResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifyAccountResponse(const ModifyAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAccountResponse)
    Q_DISABLE_COPY(ModifyAccountResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
