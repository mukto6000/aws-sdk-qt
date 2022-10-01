// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALEXAFORBUSINESSREQUEST_P_H
#define QTAWS_ALEXAFORBUSINESSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AlexaForBusinessRequest;

class AlexaForBusinessRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AlexaForBusinessRequest::Action action; ///< AlexaForBusiness action to be performed.
    QString apiVersion;        ///< AlexaForBusiness API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AlexaForBusiness request (query string) parameters. @todo?

    AlexaForBusinessRequestPrivate(const AlexaForBusinessRequest::Action action, AlexaForBusinessRequest * const q);
    AlexaForBusinessRequestPrivate(const AlexaForBusinessRequestPrivate &other, AlexaForBusinessRequest * const q);

    static QString toString(const AlexaForBusinessRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AlexaForBusinessRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
