// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTSREQUEST_H
#define QTAWS_DESCRIBEPROJECTSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectsRequestPrivate;

class QTAWSREKOGNITION_EXPORT DescribeProjectsRequest : public RekognitionRequest {

public:
    DescribeProjectsRequest(const DescribeProjectsRequest &other);
    DescribeProjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
