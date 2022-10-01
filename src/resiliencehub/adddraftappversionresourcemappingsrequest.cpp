// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adddraftappversionresourcemappingsrequest.h"
#include "adddraftappversionresourcemappingsrequest_p.h"
#include "adddraftappversionresourcemappingsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::AddDraftAppVersionResourceMappingsRequest
 * \brief The AddDraftAppVersionResourceMappingsRequest class provides an interface for ResilienceHub AddDraftAppVersionResourceMappings requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::addDraftAppVersionResourceMappings
 */

/*!
 * Constructs a copy of \a other.
 */
AddDraftAppVersionResourceMappingsRequest::AddDraftAppVersionResourceMappingsRequest(const AddDraftAppVersionResourceMappingsRequest &other)
    : ResilienceHubRequest(new AddDraftAppVersionResourceMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddDraftAppVersionResourceMappingsRequest object.
 */
AddDraftAppVersionResourceMappingsRequest::AddDraftAppVersionResourceMappingsRequest()
    : ResilienceHubRequest(new AddDraftAppVersionResourceMappingsRequestPrivate(ResilienceHubRequest::AddDraftAppVersionResourceMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool AddDraftAppVersionResourceMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddDraftAppVersionResourceMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddDraftAppVersionResourceMappingsRequest::response(QNetworkReply * const reply) const
{
    return new AddDraftAppVersionResourceMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::AddDraftAppVersionResourceMappingsRequestPrivate
 * \brief The AddDraftAppVersionResourceMappingsRequestPrivate class provides private implementation for AddDraftAppVersionResourceMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a AddDraftAppVersionResourceMappingsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
AddDraftAppVersionResourceMappingsRequestPrivate::AddDraftAppVersionResourceMappingsRequestPrivate(
    const ResilienceHubRequest::Action action, AddDraftAppVersionResourceMappingsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddDraftAppVersionResourceMappingsRequest
 * class' copy constructor.
 */
AddDraftAppVersionResourceMappingsRequestPrivate::AddDraftAppVersionResourceMappingsRequestPrivate(
    const AddDraftAppVersionResourceMappingsRequestPrivate &other, AddDraftAppVersionResourceMappingsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
