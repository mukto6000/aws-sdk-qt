// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSRESPONSE_H

#include "neptuneresponse.h"
#include "describeenginedefaultclusterparametersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeEngineDefaultClusterParametersResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeEngineDefaultClusterParametersResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeEngineDefaultClusterParametersResponse(const DescribeEngineDefaultClusterParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEngineDefaultClusterParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngineDefaultClusterParametersResponse)
    Q_DISABLE_COPY(DescribeEngineDefaultClusterParametersResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
