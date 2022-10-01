// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopjobrequest.h"
#include "stopjobrequest_p.h"
#include "stopjobresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StopJobRequest
 * \brief The StopJobRequest class provides an interface for Amplify StopJob requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::stopJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopJobRequest::StopJobRequest(const StopJobRequest &other)
    : AmplifyRequest(new StopJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopJobRequest object.
 */
StopJobRequest::StopJobRequest()
    : AmplifyRequest(new StopJobRequestPrivate(AmplifyRequest::StopJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopJobRequest::response(QNetworkReply * const reply) const
{
    return new StopJobResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::StopJobRequestPrivate
 * \brief The StopJobRequestPrivate class provides private implementation for StopJobRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StopJobRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
StopJobRequestPrivate::StopJobRequestPrivate(
    const AmplifyRequest::Action action, StopJobRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopJobRequest
 * class' copy constructor.
 */
StopJobRequestPrivate::StopJobRequestPrivate(
    const StopJobRequestPrivate &other, StopJobRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
