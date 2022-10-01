// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSREQUEST_H
#define QTAWS_LISTCLUSTERSREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class ListClustersRequestPrivate;

class QTAWSEKS_EXPORT ListClustersRequest : public EksRequest {

public:
    ListClustersRequest(const ListClustersRequest &other);
    ListClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClustersRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
