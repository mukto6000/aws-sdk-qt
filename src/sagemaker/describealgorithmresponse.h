// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALGORITHMRESPONSE_H
#define QTAWS_DESCRIBEALGORITHMRESPONSE_H

#include "sagemakerresponse.h"
#include "describealgorithmrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAlgorithmResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAlgorithmResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeAlgorithmResponse(const DescribeAlgorithmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlgorithmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlgorithmResponse)
    Q_DISABLE_COPY(DescribeAlgorithmResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
