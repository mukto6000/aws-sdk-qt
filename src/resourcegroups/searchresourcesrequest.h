// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHRESOURCESREQUEST_H
#define QTAWS_SEARCHRESOURCESREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class SearchResourcesRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT SearchResourcesRequest : public ResourceGroupsRequest {

public:
    SearchResourcesRequest(const SearchResourcesRequest &other);
    SearchResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchResourcesRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
