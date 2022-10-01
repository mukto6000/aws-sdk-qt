// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSRESPONSE_H
#define QTAWS_LISTWORKFLOWSRESPONSE_H

#include "customerprofilesresponse.h"
#include "listworkflowsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListWorkflowsResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListWorkflowsResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    ListWorkflowsResponse(const ListWorkflowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkflowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkflowsResponse)
    Q_DISABLE_COPY(ListWorkflowsResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
