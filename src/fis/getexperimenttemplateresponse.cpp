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

#include "getexperimenttemplateresponse.h"
#include "getexperimenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetExperimentTemplateResponse
 * \brief The GetExperimentTemplateResponse class provides an interace for Fis GetExperimentTemplate responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getExperimentTemplate
 */

/*!
 * Constructs a GetExperimentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetExperimentTemplateResponse::GetExperimentTemplateResponse(
        const GetExperimentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new GetExperimentTemplateResponsePrivate(this), parent)
{
    setRequest(new GetExperimentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExperimentTemplateRequest * GetExperimentTemplateResponse::request() const
{
    Q_D(const GetExperimentTemplateResponse);
    return static_cast<const GetExperimentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis GetExperimentTemplate \a response.
 */
void GetExperimentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExperimentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::GetExperimentTemplateResponsePrivate
 * \brief The GetExperimentTemplateResponsePrivate class provides private implementation for GetExperimentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetExperimentTemplateResponsePrivate object with public implementation \a q.
 */
GetExperimentTemplateResponsePrivate::GetExperimentTemplateResponsePrivate(
    GetExperimentTemplateResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis GetExperimentTemplate response element from \a xml.
 */
void GetExperimentTemplateResponsePrivate::parseGetExperimentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExperimentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
