// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountrequest.h"
#include "describeaccountrequest_p.h"
#include "describeaccountresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeAccountRequest
 * \brief The DescribeAccountRequest class provides an interface for WorkSpaces DescribeAccount requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows or Amazon Linux desktops for your
 *  users, known as <i>WorkSpaces</i>. WorkSpaces eliminates the need to procure and deploy hardware or install complex
 *  software. You can quickly add or remove users as your needs change. Users can access their virtual desktops from
 *  multiple devices or web
 * 
 *  browsers>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the WorkSpaces
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Amazon WorkSpaces service, see <a href="https://docs.aws.amazon.com/general/latest/gr/wsp.html">WorkSpaces endpoints and
 *  quotas</a> in the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  You can also manage your WorkSpaces resources using the WorkSpaces console, Command Line Interface (CLI), and SDKs. For
 *  more information about administering WorkSpaces, see the <a
 *  href="https://docs.aws.amazon.com/workspaces/latest/adminguide/">Amazon WorkSpaces Administration Guide</a>. For more
 *  information about using the Amazon WorkSpaces client application or web browser to access provisioned WorkSpaces, see
 *  the <a href="https://docs.aws.amazon.com/workspaces/latest/userguide/">Amazon WorkSpaces User Guide</a>. For more
 *  information about using the CLI to manage your WorkSpaces resources, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/workspaces/index.html">WorkSpaces section of the CLI
 *
 * \sa WorkSpacesClient::describeAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountRequest::DescribeAccountRequest(const DescribeAccountRequest &other)
    : WorkSpacesRequest(new DescribeAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountRequest object.
 */
DescribeAccountRequest::DescribeAccountRequest()
    : WorkSpacesRequest(new DescribeAccountRequestPrivate(WorkSpacesRequest::DescribeAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeAccountRequestPrivate
 * \brief The DescribeAccountRequestPrivate class provides private implementation for DescribeAccountRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeAccountRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeAccountRequestPrivate::DescribeAccountRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeAccountRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountRequest
 * class' copy constructor.
 */
DescribeAccountRequestPrivate::DescribeAccountRequestPrivate(
    const DescribeAccountRequestPrivate &other, DescribeAccountRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
