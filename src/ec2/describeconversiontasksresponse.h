// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONVERSIONTASKSRESPONSE_H
#define QTAWS_DESCRIBECONVERSIONTASKSRESPONSE_H

#include "ec2response.h"
#include "describeconversiontasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeConversionTasksResponsePrivate;

class QTAWSEC2_EXPORT DescribeConversionTasksResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeConversionTasksResponse(const DescribeConversionTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConversionTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConversionTasksResponse)
    Q_DISABLE_COPY(DescribeConversionTasksResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
