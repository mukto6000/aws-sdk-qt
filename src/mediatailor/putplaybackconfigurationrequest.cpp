// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putplaybackconfigurationrequest.h"
#include "putplaybackconfigurationrequest_p.h"
#include "putplaybackconfigurationresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::PutPlaybackConfigurationRequest
 * \brief The PutPlaybackConfigurationRequest class provides an interface for MediaTailor PutPlaybackConfiguration requests.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::putPlaybackConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutPlaybackConfigurationRequest::PutPlaybackConfigurationRequest(const PutPlaybackConfigurationRequest &other)
    : MediaTailorRequest(new PutPlaybackConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPlaybackConfigurationRequest object.
 */
PutPlaybackConfigurationRequest::PutPlaybackConfigurationRequest()
    : MediaTailorRequest(new PutPlaybackConfigurationRequestPrivate(MediaTailorRequest::PutPlaybackConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutPlaybackConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPlaybackConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPlaybackConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutPlaybackConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::PutPlaybackConfigurationRequestPrivate
 * \brief The PutPlaybackConfigurationRequestPrivate class provides private implementation for PutPlaybackConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a PutPlaybackConfigurationRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
PutPlaybackConfigurationRequestPrivate::PutPlaybackConfigurationRequestPrivate(
    const MediaTailorRequest::Action action, PutPlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPlaybackConfigurationRequest
 * class' copy constructor.
 */
PutPlaybackConfigurationRequestPrivate::PutPlaybackConfigurationRequestPrivate(
    const PutPlaybackConfigurationRequestPrivate &other, PutPlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
