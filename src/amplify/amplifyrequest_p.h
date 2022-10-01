// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYREQUEST_P_H
#define QTAWS_AMPLIFYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class AmplifyRequest;

class AmplifyRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AmplifyRequest::Action action; ///< Amplify action to be performed.
    QString apiVersion;        ///< Amplify API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Amplify request (query string) parameters. @todo?

    AmplifyRequestPrivate(const AmplifyRequest::Action action, AmplifyRequest * const q);
    AmplifyRequestPrivate(const AmplifyRequestPrivate &other, AmplifyRequest * const q);

    static QString toString(const AmplifyRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AmplifyRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
