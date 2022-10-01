// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTEMPLATESREQUEST_H
#define QTAWS_DESCRIBEASSESSMENTTEMPLATESREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTemplatesRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeAssessmentTemplatesRequest : public InspectorRequest {

public:
    DescribeAssessmentTemplatesRequest(const DescribeAssessmentTemplatesRequest &other);
    DescribeAssessmentTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssessmentTemplatesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
