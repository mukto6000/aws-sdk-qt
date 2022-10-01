// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_H

#include "docdbresponse.h"
#include "describedbclusterparametersrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClusterParametersResponsePrivate;

class QTAWSDOCDB_EXPORT DescribeDBClusterParametersResponse : public DocDbResponse {
    Q_OBJECT

public:
    DescribeDBClusterParametersResponse(const DescribeDBClusterParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterParametersResponse)
    Q_DISABLE_COPY(DescribeDBClusterParametersResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
