// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSREQUEST_H
#define QTAWS_LISTTAGSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class ListTagsRequestPrivate;

class QTAWSOPSWORKS_EXPORT ListTagsRequest : public OpsWorksRequest {

public:
    ListTagsRequest(const ListTagsRequest &other);
    ListTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
