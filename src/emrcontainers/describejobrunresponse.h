// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRUNRESPONSE_H
#define QTAWS_DESCRIBEJOBRUNRESPONSE_H

#include "emrcontainersresponse.h"
#include "describejobrunrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeJobRunResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT DescribeJobRunResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    DescribeJobRunResponse(const DescribeJobRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobRunResponse)
    Q_DISABLE_COPY(DescribeJobRunResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
