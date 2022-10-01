// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTPROPERTIESREQUEST_H
#define QTAWS_DESCRIBECLIENTPROPERTIESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientPropertiesRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeClientPropertiesRequest : public WorkSpacesRequest {

public:
    DescribeClientPropertiesRequest(const DescribeClientPropertiesRequest &other);
    DescribeClientPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
