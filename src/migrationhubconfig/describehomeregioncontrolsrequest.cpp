// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehomeregioncontrolsrequest.h"
#include "describehomeregioncontrolsrequest_p.h"
#include "describehomeregioncontrolsresponse.h"
#include "migrationhubconfigrequest_p.h"

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::DescribeHomeRegionControlsRequest
 * \brief The DescribeHomeRegionControlsRequest class provides an interface for MigrationHubConfig DescribeHomeRegionControls requests.
 *
 * \inmodule QtAwsMigrationHubConfig
 *
 *  The AWS Migration Hub home region APIs are available specifically for working with your Migration Hub home region. You
 *  can use these APIs to determine a home region, as well as to create and work with controls that describe the home
 * 
 *  region> <ul> <li>
 * 
 *  You must make API calls for write actions (create, notify, associate, disassociate, import, or put) while in your home
 *  region, or a <code>HomeRegionNotSetException</code> error is
 * 
 *  returned> </li> <li>
 * 
 *  API calls for read actions (list, describe, stop, and delete) are permitted outside of your home
 * 
 *  region> </li> <li>
 * 
 *  If you call a write API outside the home region, an <code>InvalidInputException</code> is
 * 
 *  returned> </li> <li>
 * 
 *  You can call <code>GetHomeRegion</code> action to obtain the account's Migration Hub home
 * 
 *  region> </li> </ul>
 * 
 *  For specific API usage, see the sections that follow in this AWS Migration Hub Home Region API reference.
 *
 * \sa MigrationHubConfigClient::describeHomeRegionControls
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHomeRegionControlsRequest::DescribeHomeRegionControlsRequest(const DescribeHomeRegionControlsRequest &other)
    : MigrationHubConfigRequest(new DescribeHomeRegionControlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHomeRegionControlsRequest object.
 */
DescribeHomeRegionControlsRequest::DescribeHomeRegionControlsRequest()
    : MigrationHubConfigRequest(new DescribeHomeRegionControlsRequestPrivate(MigrationHubConfigRequest::DescribeHomeRegionControlsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHomeRegionControlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHomeRegionControlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHomeRegionControlsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHomeRegionControlsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubConfig::DescribeHomeRegionControlsRequestPrivate
 * \brief The DescribeHomeRegionControlsRequestPrivate class provides private implementation for DescribeHomeRegionControlsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a DescribeHomeRegionControlsRequestPrivate object for MigrationHubConfig \a action,
 * with public implementation \a q.
 */
DescribeHomeRegionControlsRequestPrivate::DescribeHomeRegionControlsRequestPrivate(
    const MigrationHubConfigRequest::Action action, DescribeHomeRegionControlsRequest * const q)
    : MigrationHubConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHomeRegionControlsRequest
 * class' copy constructor.
 */
DescribeHomeRegionControlsRequestPrivate::DescribeHomeRegionControlsRequestPrivate(
    const DescribeHomeRegionControlsRequestPrivate &other, DescribeHomeRegionControlsRequest * const q)
    : MigrationHubConfigRequestPrivate(other, q)
{

}

} // namespace MigrationHubConfig
} // namespace QtAws
