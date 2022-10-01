// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwebhooksrequest.h"
#include "listwebhooksrequest_p.h"
#include "listwebhooksresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListWebhooksRequest
 * \brief The ListWebhooksRequest class provides an interface for Amplify ListWebhooks requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listWebhooks
 */

/*!
 * Constructs a copy of \a other.
 */
ListWebhooksRequest::ListWebhooksRequest(const ListWebhooksRequest &other)
    : AmplifyRequest(new ListWebhooksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWebhooksRequest object.
 */
ListWebhooksRequest::ListWebhooksRequest()
    : AmplifyRequest(new ListWebhooksRequestPrivate(AmplifyRequest::ListWebhooksAction, this))
{

}

/*!
 * \reimp
 */
bool ListWebhooksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWebhooksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWebhooksRequest::response(QNetworkReply * const reply) const
{
    return new ListWebhooksResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListWebhooksRequestPrivate
 * \brief The ListWebhooksRequestPrivate class provides private implementation for ListWebhooksRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListWebhooksRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListWebhooksRequestPrivate::ListWebhooksRequestPrivate(
    const AmplifyRequest::Action action, ListWebhooksRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWebhooksRequest
 * class' copy constructor.
 */
ListWebhooksRequestPrivate::ListWebhooksRequestPrivate(
    const ListWebhooksRequestPrivate &other, ListWebhooksRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
