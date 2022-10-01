/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "configurelogsforplaybackconfigurationrequest.h"
#include "configurelogsforplaybackconfigurationrequest_p.h"
#include "configurelogsforplaybackconfigurationresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ConfigureLogsForPlaybackConfigurationRequest
 * \brief The ConfigureLogsForPlaybackConfigurationRequest class provides an interface for MediaTailor ConfigureLogsForPlaybackConfiguration requests.
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
 * \sa MediaTailorClient::configureLogsForPlaybackConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
ConfigureLogsForPlaybackConfigurationRequest::ConfigureLogsForPlaybackConfigurationRequest(const ConfigureLogsForPlaybackConfigurationRequest &other)
    : MediaTailorRequest(new ConfigureLogsForPlaybackConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfigureLogsForPlaybackConfigurationRequest object.
 */
ConfigureLogsForPlaybackConfigurationRequest::ConfigureLogsForPlaybackConfigurationRequest()
    : MediaTailorRequest(new ConfigureLogsForPlaybackConfigurationRequestPrivate(MediaTailorRequest::ConfigureLogsForPlaybackConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ConfigureLogsForPlaybackConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfigureLogsForPlaybackConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfigureLogsForPlaybackConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ConfigureLogsForPlaybackConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ConfigureLogsForPlaybackConfigurationRequestPrivate
 * \brief The ConfigureLogsForPlaybackConfigurationRequestPrivate class provides private implementation for ConfigureLogsForPlaybackConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ConfigureLogsForPlaybackConfigurationRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ConfigureLogsForPlaybackConfigurationRequestPrivate::ConfigureLogsForPlaybackConfigurationRequestPrivate(
    const MediaTailorRequest::Action action, ConfigureLogsForPlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfigureLogsForPlaybackConfigurationRequest
 * class' copy constructor.
 */
ConfigureLogsForPlaybackConfigurationRequestPrivate::ConfigureLogsForPlaybackConfigurationRequestPrivate(
    const ConfigureLogsForPlaybackConfigurationRequestPrivate &other, ConfigureLogsForPlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
