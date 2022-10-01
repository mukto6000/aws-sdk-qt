// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSREQUEST_H
#define QTAWS_LISTCHANGESETSREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class ListChangesetsRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT ListChangesetsRequest : public FinspaceDataRequest {

public:
    ListChangesetsRequest(const ListChangesetsRequest &other);
    ListChangesetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChangesetsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
