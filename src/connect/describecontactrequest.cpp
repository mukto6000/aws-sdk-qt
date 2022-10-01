// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontactrequest.h"
#include "describecontactrequest_p.h"
#include "describecontactresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DescribeContactRequest
 * \brief The DescribeContactRequest class provides an interface for Connect DescribeContact requests.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::describeContact
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContactRequest::DescribeContactRequest(const DescribeContactRequest &other)
    : ConnectRequest(new DescribeContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContactRequest object.
 */
DescribeContactRequest::DescribeContactRequest()
    : ConnectRequest(new DescribeContactRequestPrivate(ConnectRequest::DescribeContactAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContactRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContactResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DescribeContactRequestPrivate
 * \brief The DescribeContactRequestPrivate class provides private implementation for DescribeContactRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DescribeContactRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DescribeContactRequestPrivate::DescribeContactRequestPrivate(
    const ConnectRequest::Action action, DescribeContactRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContactRequest
 * class' copy constructor.
 */
DescribeContactRequestPrivate::DescribeContactRequestPrivate(
    const DescribeContactRequestPrivate &other, DescribeContactRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
