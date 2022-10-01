// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIOREQUEST_H
#define QTAWS_DESCRIBESTUDIOREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DescribeStudioRequestPrivate;

class QTAWSEMR_EXPORT DescribeStudioRequest : public EmrRequest {

public:
    DescribeStudioRequest(const DescribeStudioRequest &other);
    DescribeStudioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStudioRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
