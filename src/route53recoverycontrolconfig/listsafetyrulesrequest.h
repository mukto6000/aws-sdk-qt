// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAFETYRULESREQUEST_H
#define QTAWS_LISTSAFETYRULESREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListSafetyRulesRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListSafetyRulesRequest : public Route53RecoveryControlConfigRequest {

public:
    ListSafetyRulesRequest(const ListSafetyRulesRequest &other);
    ListSafetyRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSafetyRulesRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
