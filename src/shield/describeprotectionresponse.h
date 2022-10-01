// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONRESPONSE_H
#define QTAWS_DESCRIBEPROTECTIONRESPONSE_H

#include "shieldresponse.h"
#include "describeprotectionrequest.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionResponsePrivate;

class QTAWSSHIELD_EXPORT DescribeProtectionResponse : public ShieldResponse {
    Q_OBJECT

public:
    DescribeProtectionResponse(const DescribeProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProtectionResponse)
    Q_DISABLE_COPY(DescribeProtectionResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
