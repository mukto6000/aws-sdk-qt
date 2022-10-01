// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesiterackphysicalpropertiesrequest.h"
#include "updatesiterackphysicalpropertiesrequest_p.h"
#include "updatesiterackphysicalpropertiesresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateSiteRackPhysicalPropertiesRequest
 * \brief The UpdateSiteRackPhysicalPropertiesRequest class provides an interface for Outposts UpdateSiteRackPhysicalProperties requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateSiteRackPhysicalProperties
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSiteRackPhysicalPropertiesRequest::UpdateSiteRackPhysicalPropertiesRequest(const UpdateSiteRackPhysicalPropertiesRequest &other)
    : OutpostsRequest(new UpdateSiteRackPhysicalPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSiteRackPhysicalPropertiesRequest object.
 */
UpdateSiteRackPhysicalPropertiesRequest::UpdateSiteRackPhysicalPropertiesRequest()
    : OutpostsRequest(new UpdateSiteRackPhysicalPropertiesRequestPrivate(OutpostsRequest::UpdateSiteRackPhysicalPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSiteRackPhysicalPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSiteRackPhysicalPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSiteRackPhysicalPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSiteRackPhysicalPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::UpdateSiteRackPhysicalPropertiesRequestPrivate
 * \brief The UpdateSiteRackPhysicalPropertiesRequestPrivate class provides private implementation for UpdateSiteRackPhysicalPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateSiteRackPhysicalPropertiesRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
UpdateSiteRackPhysicalPropertiesRequestPrivate::UpdateSiteRackPhysicalPropertiesRequestPrivate(
    const OutpostsRequest::Action action, UpdateSiteRackPhysicalPropertiesRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSiteRackPhysicalPropertiesRequest
 * class' copy constructor.
 */
UpdateSiteRackPhysicalPropertiesRequestPrivate::UpdateSiteRackPhysicalPropertiesRequestPrivate(
    const UpdateSiteRackPhysicalPropertiesRequestPrivate &other, UpdateSiteRackPhysicalPropertiesRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
