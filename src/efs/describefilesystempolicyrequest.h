// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMPOLICYREQUEST_H
#define QTAWS_DESCRIBEFILESYSTEMPOLICYREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemPolicyRequestPrivate;

class QTAWSEFS_EXPORT DescribeFileSystemPolicyRequest : public EfsRequest {

public:
    DescribeFileSystemPolicyRequest(const DescribeFileSystemPolicyRequest &other);
    DescribeFileSystemPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
