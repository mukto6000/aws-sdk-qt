// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSIFICATIONJOBRESPONSE_H
#define QTAWS_DESCRIBECLASSIFICATIONJOBRESPONSE_H

#include "macie2response.h"
#include "describeclassificationjobrequest.h"

namespace QtAws {
namespace Macie2 {

class DescribeClassificationJobResponsePrivate;

class QTAWSMACIE2_EXPORT DescribeClassificationJobResponse : public Macie2Response {
    Q_OBJECT

public:
    DescribeClassificationJobResponse(const DescribeClassificationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClassificationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClassificationJobResponse)
    Q_DISABLE_COPY(DescribeClassificationJobResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
