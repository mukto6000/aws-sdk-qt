// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBREQUEST_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassificationJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeDocumentClassificationJobRequest : public ComprehendRequest {

public:
    DescribeDocumentClassificationJobRequest(const DescribeDocumentClassificationJobRequest &other);
    DescribeDocumentClassificationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentClassificationJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
