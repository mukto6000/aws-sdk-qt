// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERGROUPSRESPONSE_H
#define QTAWS_DESCRIBEPARAMETERGROUPSRESPONSE_H

#include "daxresponse.h"
#include "describeparametergroupsrequest.h"

namespace QtAws {
namespace Dax {

class DescribeParameterGroupsResponsePrivate;

class QTAWSDAX_EXPORT DescribeParameterGroupsResponse : public DaxResponse {
    Q_OBJECT

public:
    DescribeParameterGroupsResponse(const DescribeParameterGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeParameterGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeParameterGroupsResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
