// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPARENTPATHSREQUEST_H
#define QTAWS_LISTOBJECTPARENTPATHSREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectParentPathsRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectParentPathsRequest : public CloudDirectoryRequest {

public:
    ListObjectParentPathsRequest(const ListObjectParentPathsRequest &other);
    ListObjectParentPathsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectParentPathsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
