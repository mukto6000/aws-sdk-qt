// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrunresponse.h"
#include "getrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRunResponse
 * \brief The GetRunResponse class provides an interace for DeviceFarm GetRun responses.
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
 * \sa DeviceFarmClient::getRun
 */

/*!
 * Constructs a GetRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetRunResponse::GetRunResponse(
        const GetRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetRunResponsePrivate(this), parent)
{
    setRequest(new GetRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRunRequest * GetRunResponse::request() const
{
    Q_D(const GetRunResponse);
    return static_cast<const GetRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetRun \a response.
 */
void GetRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetRunResponsePrivate
 * \brief The GetRunResponsePrivate class provides private implementation for GetRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetRunResponsePrivate object with public implementation \a q.
 */
GetRunResponsePrivate::GetRunResponsePrivate(
    GetRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetRun response element from \a xml.
 */
void GetRunResponsePrivate::parseGetRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
