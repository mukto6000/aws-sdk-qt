// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getremoteaccesssessionresponse.h"
#include "getremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRemoteAccessSessionResponse
 * \brief The GetRemoteAccessSessionResponse class provides an interace for DeviceFarm GetRemoteAccessSession responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::getRemoteAccessSession
 */

/*!
 * Constructs a GetRemoteAccessSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetRemoteAccessSessionResponse::GetRemoteAccessSessionResponse(
        const GetRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new GetRemoteAccessSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRemoteAccessSessionRequest * GetRemoteAccessSessionResponse::request() const
{
    Q_D(const GetRemoteAccessSessionResponse);
    return static_cast<const GetRemoteAccessSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetRemoteAccessSession \a response.
 */
void GetRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetRemoteAccessSessionResponsePrivate
 * \brief The GetRemoteAccessSessionResponsePrivate class provides private implementation for GetRemoteAccessSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetRemoteAccessSessionResponsePrivate object with public implementation \a q.
 */
GetRemoteAccessSessionResponsePrivate::GetRemoteAccessSessionResponsePrivate(
    GetRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetRemoteAccessSession response element from \a xml.
 */
void GetRemoteAccessSessionResponsePrivate::parseGetRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRemoteAccessSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
