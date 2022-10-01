// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateenvironmentresponse.h"
#include "updateenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::UpdateEnvironmentResponse
 * \brief The UpdateEnvironmentResponse class provides an interace for Finspace UpdateEnvironment responses.
 *
 * \inmodule QtAwsFinspace
 *
 *  The FinSpace management service provides the APIs for managing FinSpace
 *
 * \sa FinspaceClient::updateEnvironment
 */

/*!
 * Constructs a UpdateEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEnvironmentResponse::UpdateEnvironmentResponse(
        const UpdateEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceResponse(new UpdateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new UpdateEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEnvironmentRequest * UpdateEnvironmentResponse::request() const
{
    Q_D(const UpdateEnvironmentResponse);
    return static_cast<const UpdateEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Finspace UpdateEnvironment \a response.
 */
void UpdateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Finspace::UpdateEnvironmentResponsePrivate
 * \brief The UpdateEnvironmentResponsePrivate class provides private implementation for UpdateEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a UpdateEnvironmentResponsePrivate object with public implementation \a q.
 */
UpdateEnvironmentResponsePrivate::UpdateEnvironmentResponsePrivate(
    UpdateEnvironmentResponse * const q) : FinspaceResponsePrivate(q)
{

}

/*!
 * Parses a Finspace UpdateEnvironment response element from \a xml.
 */
void UpdateEnvironmentResponsePrivate::parseUpdateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Finspace
} // namespace QtAws
