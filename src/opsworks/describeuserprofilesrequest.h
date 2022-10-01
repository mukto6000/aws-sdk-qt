// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILESREQUEST_H
#define QTAWS_DESCRIBEUSERPROFILESREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeUserProfilesRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeUserProfilesRequest : public OpsWorksRequest {

public:
    DescribeUserProfilesRequest(const DescribeUserProfilesRequest &other);
    DescribeUserProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserProfilesRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
