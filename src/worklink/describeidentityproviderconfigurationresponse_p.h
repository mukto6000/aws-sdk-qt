// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DescribeIdentityProviderConfigurationResponse;

class DescribeIdentityProviderConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DescribeIdentityProviderConfigurationResponsePrivate(DescribeIdentityProviderConfigurationResponse * const q);

    void parseDescribeIdentityProviderConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityProviderConfigurationResponse)
    Q_DISABLE_COPY(DescribeIdentityProviderConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
